//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class SPProtoAudioFilePlayerAsset, SPProtoAudioFilePlayerItem, SPProtoAudioFileQueuePlayer;

@interface SPProtoAudioFilePlayerMessage : PBCodable <NSCopying>
{
    SPProtoAudioFilePlayerAsset *_asset;
    SPProtoAudioFilePlayerItem *_playerItem;
    SPProtoAudioFileQueuePlayer *_queuePlayer;
}

@property(retain, nonatomic) SPProtoAudioFileQueuePlayer *queuePlayer; // @synthesize queuePlayer=_queuePlayer;
@property(retain, nonatomic) SPProtoAudioFilePlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) SPProtoAudioFilePlayerAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasQueuePlayer;
@property(readonly, nonatomic) _Bool hasPlayerItem;
@property(readonly, nonatomic) _Bool hasAsset;

@end
