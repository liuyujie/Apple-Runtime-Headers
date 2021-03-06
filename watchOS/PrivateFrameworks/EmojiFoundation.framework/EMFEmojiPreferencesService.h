//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class EMFEmojiPreferences, NSObject<OS_dispatch_queue>, NSString, NSXPCListener;

@interface EMFEmojiPreferencesService : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    EMFEmojiPreferences *_preferences;
}

+ (id)sharedServiceWithMachName:(id)arg1;
@property(retain, nonatomic) EMFEmojiPreferences *preferences; // @synthesize preferences=_preferences;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_createPreferencesIfNecessary;
- (void)dealloc;
- (id)initWithMachName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

