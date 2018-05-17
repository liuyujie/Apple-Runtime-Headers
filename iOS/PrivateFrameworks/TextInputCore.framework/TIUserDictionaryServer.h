//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TIKeyboardActivityObserving.h"
#import "TIUserDictionaryServing.h"

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface TIUserDictionaryServer : NSObject <TIKeyboardActivityObserving, TIUserDictionaryServing>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_observers;
    NSArray *_cache;
    _Bool _updating;
    int _pendingUpdates;
    unsigned long long _keyboardActivityState;
    long long _recentClientCount;
    NSUUID *_userDictionaryUUID;
}

+ (double)decrementClientDelay;
+ (id)singletonInstance;
+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;
@property(copy, nonatomic) NSUUID *userDictionaryUUID; // @synthesize userDictionaryUUID=_userDictionaryUUID;
- (void)handleIdleTimeout;
- (void)keyboardActivityDidTransition:(id)arg1;
- (void)decrementRecentClientCountAfterDelay;
- (void)incrementRecentClientCount;
- (void)managedKeyboardSettingsDidChange:(id)arg1;
- (void)loadPhraseShortcutPairs:(CDUnknownBlockType)arg1;
- (void)resetCache;
- (void)updateCache;
- (void)getPhraseShortcutPairs:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (id)addObserver:(CDUnknownBlockType)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
