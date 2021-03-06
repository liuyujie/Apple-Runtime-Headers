//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEODirectionsCollectionRequest : PBRequest <NSCopying>
{
    NSMutableArray *_requestElements;
}

+ (Class)requestElementsType;
@property(retain, nonatomic) NSMutableArray *requestElements; // @synthesize requestElements=_requestElements;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)requestElementsAtIndex:(unsigned int)arg1;
- (unsigned int)requestElementsCount;
- (void)addRequestElements:(id)arg1;
- (void)clearRequestElements;

@end

