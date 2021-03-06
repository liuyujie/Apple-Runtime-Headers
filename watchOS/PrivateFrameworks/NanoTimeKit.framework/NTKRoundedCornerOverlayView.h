//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CLKDevice, UIImageView;

@interface NTKRoundedCornerOverlayView : UIView
{
    float _cornerRadius;
    UIImageView *_upperLeftCorner;
    UIImageView *_upperRightCorner;
    UIImageView *_bottomLeftCorner;
    UIImageView *_bottomRightCorner;
    CLKDevice *_device;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 forDeviceCornerRadius:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2 cornerRadius:(float)arg3;

@end

