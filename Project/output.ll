; ModuleID = 'file'
source_filename = "file"

@k = global i32 8
@x = global i32 9
@z = global i32 0

define i32 @main() {
entry:
  %0 = call i32 @"global##f"(i32 2, i32 3)
  %1 = alloca [4 x i8], align 1
  store [4 x i8] c"%d\0A\00", [4 x i8]* %1, align 1
  %2 = bitcast [4 x i8]* %1 to i8*
  %3 = call i32 (i8*, ...) @printf(i8* %2, i32 %0)
  %4 = alloca i32, align 4
  store i32 5, i32* %4, align 4
  %5 = load i32, i32* @x, align 4
  %6 = alloca [4 x i8], align 1
  store [4 x i8] c"%d\0A\00", [4 x i8]* %6, align 1
  %7 = bitcast [4 x i8]* %6 to i8*
  %8 = call i32 (i8*, ...) @printf(i8* %7, i32 %5)
  ret i32 0
}

declare i32 @printf(i8*, ...)

define i32 @"global##f"(i32 %x, i32 %y) {
"global##f##entry":
  %0 = alloca i32, align 4
  store i32 %x, i32* %0, align 4
  %1 = alloca i32, align 4
  store i32 %y, i32* %1, align 4
  %2 = load i32, i32* %0, align 4
  %3 = load i32, i32* %1, align 4
  %4 = call i32 @"global##foo"(i32 %2, i32 %3)
  ret i32 %4
}

define void @"global##i"(i32 %y) {
"global##i##entry":
  %0 = alloca i32, align 4
  store i32 %y, i32* %0, align 4
  %1 = load i32, i32* %0, align 4
  %2 = alloca [4 x i8], align 1
  store [4 x i8] c"%d\0A\00", [4 x i8]* %2, align 1
  %3 = bitcast [4 x i8]* %2 to i8*
  %4 = call i32 (i8*, ...) @printf(i8* %3, i32 %1)
  ret void
}

define i32 @"global##foo"(i32 %x, i32 %y) {
"global##foo##entry":
  %0 = alloca i32, align 4
  store i32 %x, i32* %0, align 4
  %1 = alloca i32, align 4
  store i32 %y, i32* %1, align 4
  %2 = alloca i32, align 4
  store i32 0, i32* %2, align 4
  br label %cond_0

cond_0:                                           ; preds = %"global##foo##entry"
  %3 = load i32, i32* @k, align 4
  %4 = icmp slt i32 %3, 0
  br i1 %4, label %body_0, label %else

body_0:                                           ; preds = %cond_0
  %5 = load i32, i32* %0, align 4
  %6 = load i32, i32* %1, align 4
  %7 = add i32 %5, %6
  store i32 %7, i32* %2, align 4
  br label %end

else:                                             ; preds = %cond_0
  %8 = load i32, i32* %0, align 4
  %9 = load i32, i32* %1, align 4
  %10 = sub i32 %8, %9
  store i32 %10, i32* %2, align 4
  br label %end

end:                                              ; preds = %else, %body_0
  %11 = load i32, i32* %2, align 4
  ret i32 %11
}
