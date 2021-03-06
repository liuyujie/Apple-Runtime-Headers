//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface GEOVisualLaneGuidance : PBCodable <NSCopying>
{
    NSMutableArray *_instructions;
    NSMutableArray *_laneInfos;
    NSMutableArray *_titles;
}

+ (Class)titleType;
+ (Class)instructionType;
+ (Class)laneInfoType;
@property(retain, nonatomic) NSMutableArray *titles; // @synthesize titles=_titles;
@property(retain, nonatomic) NSMutableArray *instructions; // @synthesize instructions=_instructions;
@property(retain, nonatomic) NSMutableArray *laneInfos; // @synthesize laneInfos=_laneInfos;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)titleAtIndex:(unsigned long long)arg1;
- (unsigned long long)titlesCount;
- (void)addTitle:(id)arg1;
- (void)clearTitles;
- (id)instructionAtIndex:(unsigned long long)arg1;
- (unsigned long long)instructionsCount;
- (void)addInstruction:(id)arg1;
- (void)clearInstructions;
- (id)laneInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)laneInfosCount;
- (void)addLaneInfo:(id)arg1;
- (void)clearLaneInfos;

@end

