//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiReply.h>

@class LiModelChangeHistoricalMarker;

@interface LiHistoricalMarkerReply : LiReply
{
    LiModelChangeHistoricalMarker *_historicalMarker;
}

+ (unsigned char)encodingObjectType;
@property(readonly) LiModelChangeHistoricalMarker *historicalMarker; // @synthesize historicalMarker=_historicalMarker;
- (void).cxx_destruct;
- (void)encodeWithTransportEncoder:(id)arg1 forLibrary:(id)arg2;
- (id)initWithTransportDecoder:(id)arg1 forLibrary:(id)arg2;
- (id)initWithHistoricalMarker:(id)arg1 forRequest:(id)arg2;

@end

