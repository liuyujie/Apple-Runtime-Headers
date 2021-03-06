//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDModuleLayoutEntry : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_applicationIds;
    NSString *_debugLayoutId;
    NSMutableArray *_modules;
    int _platformType;
    struct {
        unsigned int platformType:1;
    } _has;
}

+ (Class)modulesType;
+ (Class)applicationIdType;
@property(retain, nonatomic) NSMutableArray *modules; // @synthesize modules=_modules;
@property(retain, nonatomic) NSString *debugLayoutId; // @synthesize debugLayoutId=_debugLayoutId;
@property(retain, nonatomic) NSMutableArray *applicationIds; // @synthesize applicationIds=_applicationIds;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)modulesAtIndex:(unsigned int)arg1;
- (unsigned int)modulesCount;
- (void)addModules:(id)arg1;
- (void)clearModules;
- (int)StringAsPlatformType:(id)arg1;
- (id)platformTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasPlatformType;
@property(nonatomic) int platformType; // @synthesize platformType=_platformType;
@property(readonly, nonatomic) _Bool hasDebugLayoutId;
- (id)applicationIdAtIndex:(unsigned int)arg1;
- (unsigned int)applicationIdsCount;
- (void)addApplicationId:(id)arg1;
- (void)clearApplicationIds;

@end

