//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKObjectType, NSArray, _HKAnchoredObjectQueryManager;

@protocol _HKAnchoredObjectQueryObserver <NSObject>
- (void)queryManager:(_HKAnchoredObjectQueryManager *)arg1 didReceiveUpdatesForType:(HKObjectType *)arg2 samplesAdded:(NSArray *)arg3 objectsRemoved:(NSArray *)arg4;
@end

