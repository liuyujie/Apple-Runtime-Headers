//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AKTextAnnotationAttributeHelper : NSObject
{
}

+ (void)enumerateFontAttributesOfAttributedString:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)newTextStorageOriginalFontSavvyWithString:(id)arg1 attributes:(id)arg2;
+ (id)newTextStorageOriginalFontSavvyWithAttributedString:(id)arg1;
+ (id)newTextStorage:(id)arg1 byApplyingScaleFactor:(double)arg2;
+ (id)typingAttributes:(id)arg1 byApplyingScaleFactor:(double)arg2;
+ (id)font:(id)arg1 byApplyingScaleFactor:(double)arg2;
+ (id)actualOrPlaceholderTextOfAnnotation:(id)arg1;
+ (id)placeholderTextOfAnnotation:(id)arg1;
+ (void)adjustAnnotationBoundsToFitText:(id)arg1;
+ (void)adjustBoundsOfAnnotation:(id)arg1 toFitOptionalText:(id)arg2 onPageController:(id)arg3;
+ (void)setTextAttributes:(id)arg1 ofAnnotation:(id)arg2;
+ (id)textAttributesOfEditor:(id)arg1;
+ (id)textAttributesOfAnnotations:(id)arg1;
+ (void)setTextAlignment:(unsigned long long)arg1 ofAnnotation:(id)arg2;
+ (void)setFont:(id)arg1 ofAnnotation:(id)arg2;
+ (id)fontsOfEditor:(id)arg1;
+ (id)fontsOfAnnotations:(id)arg1;
+ (void)resolvedAlignmentAndDirection:(id)arg1 locale:(id)arg2 alignment:(unsigned long long *)arg3 direction:(long long *)arg4;

@end
