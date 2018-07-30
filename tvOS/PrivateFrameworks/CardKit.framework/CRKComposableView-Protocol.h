//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIView<CRKCardSectionView>;

@protocol CRKComposableView <NSObject>
@property(readonly, nonatomic) NSArray *cardSectionSubviews;
@property(readonly, nonatomic) struct UIEdgeInsets cardSectionContentMargins;
- (void)cardSectionSubviewWantsToBeRemovedFromHierarchy:(UIView<CRKCardSectionView> *)arg1;
- (void)addCardSectionSubview:(UIView<CRKCardSectionView> *)arg1 withKeyline:(long long)arg2;
@end
