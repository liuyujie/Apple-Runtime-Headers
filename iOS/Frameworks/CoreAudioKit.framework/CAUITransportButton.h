//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

__attribute__((visibility("hidden")))
@interface CAUITransportButton : UIButton
{
    int drawingStyle;
    struct CGColor *fillColor;
    struct CGRect imageRect;
}

+ (Class)layerClass;
- (struct CGPath *)newPathRefForStyle:(int)arg1;
- (void)flash;
@property struct CGColor *fillColor;
@property int drawingStyle;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

