//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <coreroutine/RTService.h>

@class CNContact, RTDataProtectionManager, RTDistanceCalculator, RTMapServiceManager;

@interface RTContactsManager : RTService
{
    _Bool _available;
    RTDataProtectionManager *_dataProtectionManager;
    RTMapServiceManager *_mapServiceManager;
    RTDistanceCalculator *_distanceCalculator;
    CNContact *_meCard;
}

+ (id)addressDictionaryFromMapItem:(id)arg1;
+ (id)addressLabelTypeToString:(unsigned long long)arg1;
+ (id)addressLabelTypeToLabel:(unsigned long long)arg1;
+ (unsigned long long)labelStringToAddressLabelType:(id)arg1;
@property(nonatomic) _Bool available; // @synthesize available=_available;
@property(retain, nonatomic) CNContact *meCard; // @synthesize meCard=_meCard;
@property(retain, nonatomic) RTDistanceCalculator *distanceCalculator; // @synthesize distanceCalculator=_distanceCalculator;
@property(retain, nonatomic) RTMapServiceManager *mapServiceManager; // @synthesize mapServiceManager=_mapServiceManager;
@property(retain, nonatomic) RTDataProtectionManager *dataProtectionManager; // @synthesize dataProtectionManager=_dataProtectionManager;
- (void).cxx_destruct;
- (_Bool)updateAddressLabelTypeOfMeCardWithAddressIdentifier:(id)arg1 toAddressLabelType:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)updateAddressLabelTypeOfContact:(id)arg1 withAddressIdentifier:(id)arg2 toAddressLabelType:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)updateAddressOfMeCardWithAddressIdentifier:(id)arg1 toAddressFromMapItem:(id)arg2 error:(id *)arg3;
- (_Bool)updateAddressOfContact:(id)arg1 withAddressIdentifier:(id)arg2 toAddressFromMapItem:(id)arg3 error:(id *)arg4;
- (id)addAddressToMeCardWithAddressLabelType:(unsigned long long)arg1 addressFromMapItem:(id)arg2 error:(id *)arg3;
- (id)addAddressToContact:(id)arg1 addressLabelType:(unsigned long long)arg2 addressFromMapItem:(id)arg3 error:(id *)arg4;
- (id)addressIdentifierOfContact:(id)arg1 withAddressFromMapItem:(id)arg2 error:(id *)arg3;
- (id)addressIdentifierOfMeCardWithAddressFromMapItem:(id)arg1 error:(id *)arg2;
- (_Bool)removeAddressOfMeCardWithAddressIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)removeAddressOfContact:(id)arg1 withAddressIdentifier:(id)arg2 error:(id *)arg3;
- (void)donatePostalAddress:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_donatePostalAddress:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchMeCardWithHandler:(CDUnknownBlockType)arg1;
- (void)onDataProtectionNotification:(id)arg1;
- (void)_fetchMeCardWithHandler:(CDUnknownBlockType)arg1;
- (void)_onContactStoreNotification:(id)arg1;
- (void)onContactStoreNotification:(id)arg1;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (id)_getMeCardWithError:(id *)arg1;
- (void)_shutdown;
- (void)_setup;
- (id)initWithDataProtectionManager:(id)arg1 mapServiceManager:(id)arg2 distanceCalculator:(id)arg3;
- (id)init;

@end

