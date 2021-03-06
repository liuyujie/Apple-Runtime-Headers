//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface AWDCoreRoutineDeletionStats : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _deleteType;
    NSMutableArray *_groups;
    _Bool _syncEnabled;
    struct {
        unsigned int timestamp:1;
        unsigned int deleteType:1;
        unsigned int syncEnabled:1;
    } _has;
}

+ (Class)groupsType;
@property(retain, nonatomic) NSMutableArray *groups; // @synthesize groups=_groups;
@property(nonatomic) unsigned int deleteType; // @synthesize deleteType=_deleteType;
@property(nonatomic) _Bool syncEnabled; // @synthesize syncEnabled=_syncEnabled;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)groupsAtIndex:(unsigned long long)arg1;
- (unsigned long long)groupsCount;
- (void)addGroups:(id)arg1;
- (void)clearGroups;
@property(nonatomic) _Bool hasDeleteType;
@property(nonatomic) _Bool hasSyncEnabled;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

