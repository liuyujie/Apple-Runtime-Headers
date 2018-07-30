//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _INPBDataString, _INPBInteger, _INPBIntentMetadata;

@protocol _INPBSetSeatSettingsInCarIntent <NSObject>
@property(nonatomic) BOOL hasSeat;
@property(nonatomic) int seat;
@property(nonatomic) BOOL hasRelativeLevelSetting;
@property(nonatomic) int relativeLevelSetting;
@property(readonly, nonatomic) BOOL hasLevel;
@property(retain, nonatomic) _INPBInteger *level;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(nonatomic) BOOL hasEnableMassage;
@property(nonatomic) BOOL enableMassage;
@property(nonatomic) BOOL hasEnableHeating;
@property(nonatomic) BOOL enableHeating;
@property(nonatomic) BOOL hasEnableCooling;
@property(nonatomic) BOOL enableCooling;
@property(readonly, nonatomic) BOOL hasCarName;
@property(retain, nonatomic) _INPBDataString *carName;
- (int)StringAsSeat:(NSString *)arg1;
- (NSString *)seatAsString:(int)arg1;
- (int)StringAsRelativeLevelSetting:(NSString *)arg1;
- (NSString *)relativeLevelSettingAsString:(int)arg1;
@end
