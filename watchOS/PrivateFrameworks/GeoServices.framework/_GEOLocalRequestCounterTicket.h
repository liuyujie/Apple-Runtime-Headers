//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEORequestCounterTicket.h"

@class GEORequestCounterPersistence, NSString;

__attribute__((visibility("hidden")))
@interface _GEOLocalRequestCounterTicket : NSObject <GEORequestCounterTicket>
{
    unsigned char _type;
    NSString *_appId;
    long long _requestId;
    GEORequestCounterPersistence *_persistence;
}

+ (id)requestCounterTicketForType:(unsigned char)arg1 appId:(id)arg2 persistence:(id)arg3;
- (void).cxx_destruct;
- (void)requestCompletedWithResult:(unsigned char)arg1 mode:(unsigned char)arg2 xmitBytes:(long long)arg3 recvBytes:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
