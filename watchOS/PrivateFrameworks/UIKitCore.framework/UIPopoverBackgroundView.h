//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import "UIPopoverBackgroundViewMethods.h"

@interface UIPopoverBackgroundView : UIView <UIPopoverBackgroundViewMethods>
{
    _Bool __chromeHidden;
}

+ (_Bool)wantsDefaultContentAppearance;
+ (float)_contentViewCornerRadiusForArrowDirection:(unsigned int)arg1;
+ (float)cornerRadius;
+ (struct UIEdgeInsets)contentViewInsets;
+ (float)arrowBase;
+ (float)arrowHeight;
@property(nonatomic, setter=_setChromeHidden:) _Bool _chromeHidden; // @synthesize _chromeHidden=__chromeHidden;
- (int)backgroundStyle;
- (void)layoutSubviews;
- (struct CGRect)_backgroundContentViewFrame;
- (struct CGRect)_contentViewFrame;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateShadow;
- (id)_shadowPath;
- (struct CGSize)_shadowOffset;
- (float)_shadowRadius;
- (float)_shadowOpacity;
- (struct UIEdgeInsets)_shadowInsets;
- (id)_shadowPathForRect:(struct CGRect)arg1 arrowDirection:(unsigned int)arg2;
- (void)_updateChrome;
- (_Bool)_needsSeperateBlending;
- (_Bool)_wantsDefaultContentAppearance;
- (struct UIEdgeInsets)_contentViewInsetsForArrowDirection:(unsigned int)arg1;
- (struct UIEdgeInsets)_contentViewInsets;
@property(nonatomic) unsigned int arrowDirection;
@property(nonatomic) float arrowOffset;

@end

