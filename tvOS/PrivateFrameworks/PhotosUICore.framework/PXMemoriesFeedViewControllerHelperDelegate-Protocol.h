//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexSet, PXMemoriesFeedLayoutMetrics, PXMemoriesFeedViewControllerHelper;

@protocol PXMemoriesFeedViewControllerHelperDelegate <NSObject>

@optional
- (void)memoriesFeedViewControllerHelper:(PXMemoriesFeedViewControllerHelper *)arg1 configureMetrics:(PXMemoriesFeedLayoutMetrics *)arg2;
- (NSIndexSet *)memoriesFeedViewControllerHelperReloadedTileKindsOnObjectChanged:(PXMemoriesFeedViewControllerHelper *)arg1;
- (_Bool)memoriesFeedViewControllerHelperFeedIsVisible:(PXMemoriesFeedViewControllerHelper *)arg1;
@end
