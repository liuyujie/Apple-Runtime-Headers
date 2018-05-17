//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICScrollViewKeyboardResizer, UIScrollView;

@protocol ICScrollViewKeyboardResizerDelegate <NSObject>
- (UIScrollView *)keyboardResizerScrollView;
- (double)consumedBottomAreaForResizer:(ICScrollViewKeyboardResizer *)arg1;

@optional
- (_Bool)keyboardResizerAutoscrollAboveKeyboard;
- (void)keyboardResizerAdjustInsetsWithKeyboardFrame:(struct CGRect)arg1 scrollAboveHeight:(double)arg2 duration:(double)arg3;
- (double)topInsetForResizer:(ICScrollViewKeyboardResizer *)arg1;
@end
