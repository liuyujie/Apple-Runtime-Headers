//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary;

@protocol _SFPBMapRegion <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) double eastLng;
@property(nonatomic) double northLat;
@property(nonatomic) double westLng;
@property(nonatomic) double southLat;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

