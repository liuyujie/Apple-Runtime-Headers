//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol DNDSSyncServiceUpdateListener <NSObject>
- (void)syncService:(id <DNDSSyncService>)arg1 didReceiveRecord:(id <DNDSSyncRecord>)arg2 sourceIdentifier:(NSString *)arg3;
@end

