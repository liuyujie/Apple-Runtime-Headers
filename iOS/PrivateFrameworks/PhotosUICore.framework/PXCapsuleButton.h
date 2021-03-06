//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSMutableDictionary, NSString, UIActivityIndicatorView;

@interface PXCapsuleButton : UIButton
{
    NSMutableDictionary *_stateColorMap;
    UIActivityIndicatorView *_activityIndicatorView;
    NSString *_maxContentSizeCategory;
}

@property(nonatomic) NSString *maxContentSizeCategory; // @synthesize maxContentSizeCategory=_maxContentSizeCategory;
- (void).cxx_destruct;
- (id)_backgroundImageWithColor:(id)arg1;
- (id)_titleFont;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)colorForState:(unsigned long long)arg1;
- (void)setColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)initWithColor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

