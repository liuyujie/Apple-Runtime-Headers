//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PULoadingStatusManager, PUOperationStatus;

@protocol PULoadingStatusManagerDelegate <NSObject>

@optional
- (void)loadingStatusManager:(PULoadingStatusManager *)arg1 didUpdateLoadingStatus:(PUOperationStatus *)arg2 forItem:(id)arg3;
@end

