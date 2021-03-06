//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ViewBridge/HostOrService.h>

#import "HostCallsAuxiliary.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ViewHost : HostOrService <HostCallsAuxiliary>
{
    unsigned int _seed;
    struct CGRect _frameInScreenCoords;
    NSString *_rendezvousWindowIdentifier;
    unsigned char _hostWindowKind;
    unsigned char _hostWindowBase;
    unsigned int _hostAppIsActive:1;
    unsigned int _keyTestWindowIsKey:1;
    unsigned int _remoteViewIsFirstResponder:1;
    unsigned int _mayAttemptCommandEquivalentAtWill:2;
    unsigned int _wantsAggressiveKeyboardFocusTheftCancellation:1;
    unsigned int _mostRecentlyResignedFirstResponderInFavorOfAccessoryView:1;
}

+ (id)ultimateAncestor:(struct NSMutableDictionary *)arg1 forProcessIdentifier:(int)arg2;
+ (id)ultimateAncestorOfWindow:(unsigned int)arg1 inDictionaryOfHostsAndServices:(struct NSMutableDictionary *)arg2;
+ (id)ultimateAncestorOfWindow:(unsigned int)arg1 inDictionaryOfHostsAndServices:(struct NSMutableDictionary *)arg2 consideringEachViewHost:(CDUnknownBlockType)arg3;
@property(readonly) unsigned char hostWindowBase; // @synthesize hostWindowBase=_hostWindowBase;
@property(readonly) unsigned char hostWindowKind; // @synthesize hostWindowKind=_hostWindowKind;
@property(copy) NSString *rendezvousWindowIdentifier; // @synthesize rendezvousWindowIdentifier=_rendezvousWindowIdentifier;
@property struct CGRect frameInScreenCoords; // @synthesize frameInScreenCoords=_frameInScreenCoords;
- (void)dealloc;
- (struct __LSASN *)ultimateHostAppSerialNumber;
- (void)invalidate:(struct NSMutableDictionary *)arg1;
- (void)forwardEventToAccessoryView:(struct __CGEvent *)arg1 reply:(CDUnknownBlockType)arg2;
- (void)potentialCommandEquivalentHitRemoteView:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)potentialCommandEquivalentHitServiceApp:(struct __CGEvent *)arg1 from:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)joinPair:(id)arg1 rendezvousWindowIdentifier:(id)arg2 frameInScreenCoords:(struct CGRect)arg3 hostWindowKind:(unsigned char)arg4 hostWindowBase:(unsigned char)arg5 reply:(CDUnknownBlockType)arg6;
@property(readonly) BOOL mayAttemptCommandEquivalentAtWill;
@property(readonly) BOOL mostRecentlyResignedFirstResponderInFavorOfAccessoryView;
@property(readonly) BOOL wantsAggressiveKeyboardFocusTheftCancellation;
@property(readonly) BOOL remoteViewIsFirstResponder;
@property(readonly) BOOL keyTestWindowIsKey;
@property(readonly) BOOL hostAppIsActive;
- (void)remoteViewBecameFirstResponderForWindowWithKey:(BOOL)arg1 inActiveApp:(BOOL)arg2 wantsAggressiveKeyboardFocusTheftCancellation:(BOOL)arg3;
- (void)remoteViewKeyTestWindowBecameKeyWhileFirstResponder:(BOOL)arg1 inActiveApp:(BOOL)arg2 wantsAggressiveKeyboardFocusTheftCancellation:(BOOL)arg3;
- (void)remoteViewResignedFirstResponderInService:(id)arg1 forWindowWithKey:(BOOL)arg2 inActiveApp:(BOOL)arg3 wantsAggressiveKeyboardFocusTheftCancellation:(BOOL)arg4 inFavorOfAccessoryView:(BOOL)arg5;
- (void)remoteViewKeyTestWindowResignedKey;
- (void)remoteViewBecameAssociatedWithWindow:(unsigned int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)updateFrameInScreenCoords:(struct CGRect)arg1;
- (void)bumpSeed;
@property(readonly) unsigned int seed;
- (void)killViewService:(CDUnknownBlockType)arg1;

@end

