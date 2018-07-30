//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSObject<OS_nw_listener>, NWEndpoint, NWParameters;

@interface NWUDPListener : NSObject
{
    NWEndpoint *_localEndpoint;
    NSError *_error;
    NSObject<OS_nw_listener> *_internalListener;
    NWParameters *_parameters;
    NWEndpoint *_endpoint;
    id <NWUDPListenerDelegate> _delegate;
}

@property __weak id <NWUDPListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NWEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(retain) NWParameters *parameters; // @synthesize parameters=_parameters;
@property(retain) NSObject<OS_nw_listener> *internalListener; // @synthesize internalListener=_internalListener;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NWEndpoint *localEndpoint; // @synthesize localEndpoint=_localEndpoint;
- (void).cxx_destruct;
- (id)initWithParameters:(id)arg1 delegate:(id)arg2;
- (void)handleError:(id)arg1;
- (void)handleConnection:(id)arg1;

@end
