//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSUUID;

__attribute__((visibility("hidden")))
@interface _LSDeviceIdentifierCache : NSObject
{
    struct NSDictionary *_identifiers;
    NSUUID *_advertiserIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    int _saveFlag;
    NSDictionary *_perUserEntropy;
}

+ (id)sharedCache;
- (void)save;
- (void)clearAllIdentifiersOfType:(long long)arg1;
- (void)clearIdentifiersForUninstallationWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;
- (void)getIdentifierOfType:(long long)arg1 vendorName:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;
- (struct NSMutableDictionary *)identifiersOfTypeNotDispatched:(long long)arg1;
- (struct NSDictionary *)allIdentifiersNotDispatched;
- (id)applyPerUserEntropyNotDispatched:(id)arg1 type:(long long)arg2;
- (void)generatePerUserEntropyIfNeededNotDispatched;
- (id)generateSomePerUserEntropyNotDispatched;
- (_Bool)deviceUnlockedSinceBoot;

@end
