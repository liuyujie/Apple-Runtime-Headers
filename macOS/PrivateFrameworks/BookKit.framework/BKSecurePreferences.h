//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BKSecureUserDefaults.h"

@class NSString, NSXPCConnection;

@interface BKSecurePreferences : NSObject <BKSecureUserDefaults>
{
    NSXPCConnection *_connection;
    CDUnknownBlockType _interruptionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)_loadConnection;
@property(readonly, nonatomic) id <BKSecureUserDefaults> remoteProxy;
- (void)getParentalControlValuesForUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setStoreDisabled:(BOOL)arg1 authBlob:(id)arg2 uid:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setExplicitContentRestricted:(BOOL)arg1 authBlob:(id)arg2 uid:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)ping:(CDUnknownBlockType)arg1;
- (BOOL)_parentalPreferenceBoolForKey:(id)arg1 iTunesKey:(id)arg2;
- (BOOL)_parentalPreferenceIsForcedForKey:(id)arg1;
@property(readonly, nonatomic) BOOL explicitContentRestrictedForced;
@property(readonly, nonatomic) BOOL bookstoreDisabledForced;
@property(readonly, nonatomic) BOOL explicitContentRestricted;
@property(readonly, nonatomic) BOOL bookstoreDisabled;
- (void)dealloc;
- (id)init;
- (id)initWithInterruptionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
