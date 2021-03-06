//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCopying.h"
#import "NSObject.h"

@class DOMEvent, NSString;

@protocol DOMEventTarget <NSObject, NSCopying>
- (void)removeEventListener:(NSString *)arg1:(id <DOMEventListener>)arg2:(_Bool)arg3;
- (void)addEventListener:(NSString *)arg1:(id <DOMEventListener>)arg2:(_Bool)arg3;
- (_Bool)dispatchEvent:(DOMEvent *)arg1;
- (void)removeEventListener:(NSString *)arg1 listener:(id <DOMEventListener>)arg2 useCapture:(_Bool)arg3;
- (void)addEventListener:(NSString *)arg1 listener:(id <DOMEventListener>)arg2 useCapture:(_Bool)arg3;
@end

