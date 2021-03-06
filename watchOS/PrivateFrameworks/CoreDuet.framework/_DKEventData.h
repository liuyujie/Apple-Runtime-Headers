//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface _DKEventData : NSObject
{
    unsigned int _version;
    NSData *_event;
    unsigned int _uncompressedLength;
}

+ (id)createFromData:(id)arg1;
+ (id)fromPBCodable:(id)arg1;
@property(readonly, nonatomic) unsigned int uncompressedLength; // @synthesize uncompressedLength=_uncompressedLength;
@property(readonly, nonatomic) NSData *event; // @synthesize event=_event;
@property(readonly, nonatomic) unsigned int version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)asData;
- (id)initWithCompressedData:(id)arg1 uncompressedLength:(unsigned int)arg2 version:(unsigned int)arg3;
- (id)initWithData:(id)arg1 version:(unsigned int)arg2;
- (id)toPBCodable;

@end

