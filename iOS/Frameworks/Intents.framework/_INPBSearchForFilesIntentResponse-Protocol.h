//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, _INPBInteger, _INPBString;

@protocol _INPBSearchForFilesIntentResponse <NSObject>
+ (Class)entitiesType;
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool success;
@property(readonly, nonatomic) _Bool hasQuery;
@property(retain, nonatomic) _INPBString *query;
@property(readonly, nonatomic) _Bool hasNumResults;
@property(retain, nonatomic) _INPBInteger *numResults;
@property(readonly, nonatomic) unsigned long long entitiesCount;
@property(copy, nonatomic) NSArray *entities;
- (_INPBString *)entitiesAtIndex:(unsigned long long)arg1;
- (void)addEntities:(_INPBString *)arg1;
- (void)clearEntities;
@end

