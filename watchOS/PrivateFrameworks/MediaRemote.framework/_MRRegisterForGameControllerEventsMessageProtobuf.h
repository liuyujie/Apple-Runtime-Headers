//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface _MRRegisterForGameControllerEventsMessageProtobuf : PBCodable <NSCopying>
{
    int _inputModeFlags;
    struct {
        unsigned int inputModeFlags:1;
    } _has;
}

- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsInputModeFlags:(id)arg1;
- (id)inputModeFlagsAsString:(int)arg1;
@property(nonatomic) _Bool hasInputModeFlags;
@property(nonatomic) int inputModeFlags; // @synthesize inputModeFlags=_inputModeFlags;

@end

