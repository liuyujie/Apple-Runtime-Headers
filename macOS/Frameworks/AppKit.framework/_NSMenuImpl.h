//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFont, NSStoryboard, NSString;

@interface _NSMenuImpl : NSObject
{
    id _impl;
    id _delegate;
    id _delegateHelper;
    id _menuOwner;
    NSFont *_font;
    NSString *_name;
    id _startingRequestor;
    double _minimumWidth;
    struct NSMenuUpdaterInfo_t *sidebandUpdaters;
    const void *_contextMenuPluginAEDesc;
    NSStoryboard *_storyboard;
    unsigned long long _indentationWidth;
    NSString *_delegateClass;
}

- (void)dealloc;

@end
