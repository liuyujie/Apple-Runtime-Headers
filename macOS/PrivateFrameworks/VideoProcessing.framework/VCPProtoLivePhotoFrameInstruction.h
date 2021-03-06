//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "VCPProtoResultLegacyConversionProtocol.h"

@interface VCPProtoLivePhotoFrameInstruction : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    struct {
        float *list;
        unsigned long long count;
        unsigned long long size;
    } _homographyParams;
    long long _timeValue;
}

+ (id)resultFromLegacyDictionary:(id)arg1;
@property(nonatomic) long long timeValue; // @synthesize timeValue=_timeValue;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setHomographyParams:(float *)arg1 count:(unsigned long long)arg2;
- (float)homographyParamAtIndex:(unsigned long long)arg1;
- (void)addHomographyParam:(float)arg1;
- (void)clearHomographyParams;
@property(readonly, nonatomic) float *homographyParams;
@property(readonly, nonatomic) unsigned long long homographyParamsCount;
- (void)dealloc;
- (id)exportToLegacyDictionary;

@end

