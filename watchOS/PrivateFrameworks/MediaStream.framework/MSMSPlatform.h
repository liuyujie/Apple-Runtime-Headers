//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSPlatform.h"

@class ACAccountStore, NSData, NSString;

@interface MSMSPlatform : NSObject <MSPlatform>
{
    _Bool _isPerfLoggingEnabled;
    NSData *_pushToken;
    ACAccountStore *_accountStore;
}

+ (id)thePlatform;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(nonatomic) _Bool isPerfLoggingEnabled; // @synthesize isPerfLoggingEnabled=_isPerfLoggingEnabled;
@property(retain, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
- (void).cxx_destruct;
- (id)theDaemon;
- (id)fullNameFromFirstName:(id)arg1 lastName:(id)arg2;
- (_Bool)shouldEnableNewFeatures;
- (id)pushTokenForPersonID:(id)arg1;
- (_Bool)personIDUsesProductionPushEnvironment:(id)arg1;
- (id)contentURLForPersonID:(id)arg1;
- (id)baseURLForPersonID:(id)arg1;
- (id)authTokenForPersonID:(id)arg1;
- (id)_accountForPersonID:(id)arg1;
- (void)didDetectUnrecoverableCondition;
- (id)socketOptions;
- (_Bool)policyMayDownload;
- (_Bool)policyMayUpload;
- (_Bool)_mayPerformFileTransfer;
- (id)appBundleInfoString;
- (id)OSString;
- (id)hardwareString;
- (id)OSVersion;
- (id)UDID;
- (Class)deletePluginClass;
- (Class)sharingPluginClass;
- (Class)subscriberPluginClass;
- (Class)publisherPluginClass;
- (id)pathMediaStreamDir;
- (void)logFile:(const char *)arg1 func:(const char *)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(id)arg6 args:(char *)arg7;
- (void)_rereadDefaults;
- (_Bool)isPerformanceLoggingEnabled;
- (void)logFacility:(int)arg1 level:(int)arg2 format:(id)arg3 args:(char *)arg4;
- (struct __CFString *)_facilityStringForFacility:(int)arg1;
- (_Bool)shouldLogAtLevel:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

