//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface UIView (NUISubclassHelpers)
- (struct CGSize)calculateLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)_didInvalidateIntrinsicContentSize;
- (float)systemSpacingToContainerView:(id)arg1 edge:(unsigned int)arg2 baselineRelative:(_Bool)arg3 multiplier:(float)arg4;
- (float)systemSpacingToAdjecentSiblingView:(id)arg1 axis:(int)arg2 baselineRelative:(_Bool)arg3 multiplier:(float)arg4;
- (float)effectiveFirstBaselineOffsetFromContentTop;
- (float)effectiveBaselineOffsetFromContentBottom;
- (float)effectiveFirstBaselineOffsetFromTop;
- (float)effectiveBaselineOffsetFromBottom;
- (struct UIEdgeInsets)effectiveAlignmentRectInsets;
- (float)effectiveScreenScale;
- (struct CGSize)effectiveMaximumLayoutContentSize;
- (struct CGSize)effectiveMinimumLayoutContentSize;
- (id)contentLayoutSizeCacheDescription;
- (int)_nui_isUIButtonType;
@property(nonatomic) _Bool neverCacheContentLayoutSize;
@end

