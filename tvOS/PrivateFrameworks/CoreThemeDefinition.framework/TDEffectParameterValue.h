//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSNumber, TDEffectComponent, TDEffectParameterType;

@interface TDEffectParameterValue : NSManagedObject
{
}

+ (id)keyPathsForValuesAffectingBlueComponent;
+ (id)keyPathsForValuesAffectingGreenComponent;
+ (id)keyPathsForValuesAffectingRedComponent;
+ (id)keyPathsForValuesAffectingColor;
@property(nonatomic) unsigned long long blueComponent;
@property(nonatomic) unsigned long long greenComponent;
@property(nonatomic) unsigned long long redComponent;

// Remaining properties
@property(retain, nonatomic) NSNumber *angleValue; // @dynamic angleValue;
@property(retain, nonatomic) NSNumber *colorValue; // @dynamic colorValue;
@property(retain, nonatomic) TDEffectComponent *component; // @dynamic component;
@property(retain, nonatomic) NSNumber *floatValue; // @dynamic floatValue;
@property(retain, nonatomic) NSNumber *intValue; // @dynamic intValue;
@property(retain, nonatomic) TDEffectParameterType *parameterType; // @dynamic parameterType;

@end

