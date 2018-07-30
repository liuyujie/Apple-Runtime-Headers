//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "VCPProtoResultLegacyConversionProtocol.h"

@class NSData;

@interface VCPProtoLivePhotoEffectsResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    unsigned long long _longExposureSuggestionState;
    unsigned long long _loopSuggestionState;
    NSData *_recipeBlob;
}

+ (id)resultFromLegacyDictionary:(id)arg1;
@property(retain, nonatomic) NSData *recipeBlob; // @synthesize recipeBlob=_recipeBlob;
@property(nonatomic) unsigned long long longExposureSuggestionState; // @synthesize longExposureSuggestionState=_longExposureSuggestionState;
@property(nonatomic) unsigned long long loopSuggestionState; // @synthesize loopSuggestionState=_loopSuggestionState;
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
@property(readonly, nonatomic) BOOL hasRecipeBlob;
- (id)exportToLegacyDictionary;

@end
