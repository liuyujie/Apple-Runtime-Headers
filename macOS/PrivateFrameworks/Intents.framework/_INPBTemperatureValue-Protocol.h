//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _INPBValueMetadata;

@protocol _INPBTemperatureValue <NSObject>
@property(readonly, nonatomic) BOOL hasValueMetadata;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property(nonatomic) BOOL hasUnit;
@property(nonatomic) int unit;
@property(nonatomic) BOOL hasMagnitude;
@property(nonatomic) double magnitude;
- (int)StringAsUnit:(NSString *)arg1;
- (NSString *)unitAsString:(int)arg1;
@end

