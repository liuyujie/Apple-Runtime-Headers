//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFObject.h"

@class HMFClassRegistry, NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface HMDPreferences : HMFObject <HMFObject>
{
    NSMutableDictionary *_preferences;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFClassRegistry *_classRegistry;
}

+ (void)setDefaultValue:(id)arg1 forPreferenceKey:(id)arg2;
+ (id)defaultValueForPreferenceKey:(id)arg1;
+ (id)defaultValues;
+ (void)setPreferenceClass:(Class)arg1 forPreferenceKey:(id)arg2;
+ (Class)preferenceClassForPreferenceKey:(id)arg1;
+ (id)classRegistry;
+ (id)sharedPreferences;
@property(readonly) HMFClassRegistry *classRegistry; // @synthesize classRegistry=_classRegistry;
@property(readonly) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
- (void).cxx_destruct;
- (id)preferenceForKey:(id)arg1;
- (void)addPreference:(id)arg1;
@property(readonly, copy) NSArray *preferences;
- (void)setPreferenceClass:(Class)arg1 forPreferenceKey:(id)arg2;
- (Class)preferenceClassForPreferenceKey:(id)arg1;
@property(readonly, copy) NSString *propertyDescription;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
