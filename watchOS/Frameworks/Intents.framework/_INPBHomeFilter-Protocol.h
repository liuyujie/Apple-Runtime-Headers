//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, _INPBDataString;

@protocol _INPBHomeFilter <NSObject>
@property(nonatomic) _Bool hasSubServiceType;
@property(nonatomic) int subServiceType;
@property(nonatomic) _Bool hasServiceType;
@property(nonatomic) int serviceType;
@property(readonly, nonatomic) _Bool hasService;
@property(retain, nonatomic) _INPBDataString *service;
@property(readonly, nonatomic) _Bool hasScene;
@property(retain, nonatomic) _INPBDataString *scene;
@property(readonly, nonatomic) _Bool hasRoom;
@property(retain, nonatomic) _INPBDataString *room;
@property(readonly, nonatomic) _Bool hasHomeZone;
@property(retain, nonatomic) _INPBDataString *homeZone;
@property(readonly, nonatomic) _Bool hasHome;
@property(retain, nonatomic) _INPBDataString *home;
@property(readonly, nonatomic) _Bool hasGroup;
@property(retain, nonatomic) _INPBDataString *group;
@property(nonatomic) _Bool hasEntityType;
@property(nonatomic) int entityType;
@property(readonly, nonatomic) unsigned int entityIdentifiersCount;
@property(copy, nonatomic) NSArray *entityIdentifiers;
@property(readonly, nonatomic) _Bool hasAccessory;
@property(retain, nonatomic) _INPBDataString *accessory;
- (int)StringAsSubServiceType:(NSString *)arg1;
- (NSString *)subServiceTypeAsString:(int)arg1;
- (int)StringAsServiceType:(NSString *)arg1;
- (NSString *)serviceTypeAsString:(int)arg1;
- (int)StringAsEntityType:(NSString *)arg1;
- (NSString *)entityTypeAsString:(int)arg1;
- (NSString *)entityIdentifiersAtIndex:(unsigned int)arg1;
- (void)addEntityIdentifiers:(NSString *)arg1;
- (void)clearEntityIdentifiers;
@end
