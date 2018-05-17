//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_CDContextPersisting.h"

@class NSCountedSet, NSObject<OS_dispatch_queue>, _CDSharedMemoryKeyValueStore;

@interface _CDSharedMemoryContextPersisting : NSObject <_CDContextPersisting>
{
    _CDSharedMemoryKeyValueStore *_store;
    NSObject<OS_dispatch_queue> *_queue;
    NSCountedSet *_keyPathRegistrationCount;
    unsigned int _localDeviceID;
}

+ (id)sharedMemoryKeyFromRegistration:(id)arg1;
+ (id)sharedMemoryKeyFromKeyPath:(id)arg1;
+ (id)persistenceWithSharedMemoryKeyValueStore:(id)arg1;
@property(nonatomic) unsigned int localDeviceID; // @synthesize localDeviceID=_localDeviceID;
@property(retain, nonatomic) NSCountedSet *keyPathRegistrationCount; // @synthesize keyPathRegistrationCount=_keyPathRegistrationCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) _CDSharedMemoryKeyValueStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)deleteDataCreatedBefore:(id)arg1;
- (void)deleteAllData;
- (id)loadRegistrations;
- (id)loadValues;
- (id)allKeysForContextStore;
- (void)deleteRegistration:(id)arg1;
- (void)saveRegistration:(id)arg1;
- (void)deleteKeyPaths:(id)arg1;
- (void)saveValue:(id)arg1 forKeyPath:(id)arg2;
- (id)initWithSharedMemoryKeyValueStore:(id)arg1;

@end
