//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class NSString;

@interface HMDSyncOperationOptions : HMFObject
{
    BOOL _cloudConflict;
    NSString *_zoneName;
}

+ (id)defaultPushOptions:(id)arg1;
+ (id)defaultFetchOptions:(id)arg1 cloudConflict:(BOOL)arg2;
@property(nonatomic, getter=isCloudConflict) BOOL cloudConflict; // @synthesize cloudConflict=_cloudConflict;
@property(readonly, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (void).cxx_destruct;
- (id)description;
- (id)_initWithZone:(id)arg1 cloudConflict:(BOOL)arg2;

@end
