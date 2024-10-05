; ModuleID = 'file'
source_filename = "file"

define i32 @main() {
entry:
  %0 = alloca i32, align 4
  store i32 0, i32* %0, align 4
  %1 = alloca i32, align 4
  store i32 9, i32* %1, align 4
  br label %condition

condition:                                        ; preds = %end1, %entry
  %2 = load i32, i32* %0, align 4
  %3 = icmp slt i32 %2, 3
  br i1 %3, label %loop, label %end

loop:                                             ; preds = %condition
  br label %cond_0

end:                                              ; preds = %condition
  %4 = load i32, i32* %1, align 4
  %5 = alloca [4 x i8], align 1
  store [4 x i8] c"%d\0A\00", [4 x i8]* %5, align 1
  %6 = bitcast [4 x i8]* %5 to i8*
  %7 = call i32 (i8*, ...) @printf(i8* %6, i32 %4)
  ret i32 0

cond_0:                                           ; preds = %loop
  %8 = load i32, i32* %0, align 4
  %9 = icmp sgt i32 %8, 1
  br i1 %9, label %body_0, label %cond_1

body_0:                                           ; preds = %cond_0
  %10 = load i32, i32* %0, align 4
  %11 = mul i32 %10, 9
  %12 = alloca [4 x i8], align 1
  store [4 x i8] c"%d\0A\00", [4 x i8]* %12, align 1
  %13 = bitcast [4 x i8]* %12 to i8*
  %14 = call i32 (i8*, ...) @printf(i8* %13, i32 %11)
  %15 = load i32, i32* %1, align 4
  %16 = mul i32 5, %15
  store i32 %16, i32* %1, align 4
  br label %end1

cond_1:                                           ; preds = %cond_0
  %17 = load i32, i32* %0, align 4
  %18 = icmp eq i32 %17, 0
  br i1 %18, label %body_1, label %else

body_1:                                           ; preds = %cond_1
  store i32 3, i32* %1, align 4
  %19 = load i32, i32* %1, align 4
  %20 = alloca [4 x i8], align 1
  store [4 x i8] c"%d\0A\00", [4 x i8]* %20, align 1
  %21 = bitcast [4 x i8]* %20 to i8*
  %22 = call i32 (i8*, ...) @printf(i8* %21, i32 %19)
  br label %end1

else:                                             ; preds = %cond_1
  br label %end1

end1:                                             ; preds = %else, %body_1, %body_0
  %23 = load i32, i32* %0, align 4
  %24 = add i32 %23, 1
  store i32 %24, i32* %0, align 4
  br label %condition
}

declare i32 @printf(i8*, ...)
