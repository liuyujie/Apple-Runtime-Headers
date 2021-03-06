//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AdCore/ADSingleton.h>

#import "ADIDManager_XPC.h"

@class DSIDRecord, NSArray, NSString;

@interface ADIDManager : ADSingleton <ADIDManager_XPC>
{
    DSIDRecord *_activeDSIDRecord;
    NSArray *_monthlyResetArray;
}

+ (id)sharedInstance;
@property(retain) NSArray *monthlyResetArray; // @synthesize monthlyResetArray=_monthlyResetArray;
@property(retain) DSIDRecord *activeDSIDRecord; // @synthesize activeDSIDRecord=_activeDSIDRecord;
- (void).cxx_destruct;
- (id)retrieveDeviceIDs;
- (void)logIDs:(id)arg1;
- (id)deviceIdentifiers;
- (void)reloadRecords:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)reloadRecords:(id)arg1;
- (id)dsidRecord:(id)arg1 fromDict:(id)arg2;
@property(readonly, nonatomic) long long IDFAMonthResetCount;
@property(readonly, nonatomic) NSString *IDFA;
- (id)encryptedIDForClientType:(long long)arg1;
- (id)idForClientType:(long long)arg1;
- (id)loadFakeRecord:(id)arg1;
- (BOOL)loadIDs;
- (void)forceReconcile:(CDUnknownBlockType)arg1;
- (id)init;

@end

