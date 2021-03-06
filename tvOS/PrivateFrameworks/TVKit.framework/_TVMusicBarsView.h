//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface _TVMusicBarsView : UIView
{
    NSArray *_barViews;
    float _repeatCount;
    unsigned long long _musicBarsStyle;
}

- (void).cxx_destruct;
- (void)_addAnimationsWithRepeatCount:(float)arg1;
- (void)_removeAnimations;
- (void)_addAnimations;
- (id)_createBarViews;
- (void)_setBarHeights:(double)arg1;
- (void)traitCollectionDidChange:(id)arg1;
@property(nonatomic) unsigned long long musicBarsStyle;
- (void)_updateMusicBarsStyle;
- (void)resumeAnimating;
- (void)stopAnimating;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

