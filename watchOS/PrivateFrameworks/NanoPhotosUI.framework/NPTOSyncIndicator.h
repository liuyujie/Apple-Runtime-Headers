//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PUICActivityIndicatorView;

@interface NPTOSyncIndicator : UIView
{
    PUICActivityIndicatorView *_activityView;
}

@property(retain, nonatomic) PUICActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

