//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_SFPBPointSize.h"

@class NSData, NSString, _SFPBGraphicalFloat;

@interface _SFPBPointSize : PBCodable <_SFPBPointSize, NSSecureCoding>
{
    _SFPBGraphicalFloat *_width;
    _SFPBGraphicalFloat *_height;
}

@property(retain, nonatomic) _SFPBGraphicalFloat *height; // @synthesize height=_height;
@property(retain, nonatomic) _SFPBGraphicalFloat *width; // @synthesize width=_width;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithCGSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

