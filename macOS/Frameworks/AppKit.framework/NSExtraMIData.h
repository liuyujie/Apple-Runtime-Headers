//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSFont, NSImage, NSMenuItemViewer, NSString, _NSBindingAdaptor;

__attribute__((visibility("hidden")))
@interface NSExtraMIData : NSObject
{
    NSAttributedString *attributedTitle;
    NSString *tooltip;
    _NSBindingAdaptor *bindingAdaptor;
    NSMenuItemViewer *menuItemViewer;
    NSImage *onStateImage;
    NSImage *offStateImage;
    NSImage *mixedStateImage;
    NSFont *font;
    NSImage *_image;
    struct CGSize imageSize;
    NSString *userKE;
    NSString *kbdKE;
    struct CGSize cachedAttributedTitleSize;
    long long cachedAttributedTitleHeightForDrawing;
    BOOL attributedTitleHasAttachment;
    unsigned short virtualKeyCode;
    unsigned short defaultKEPriority;
    unsigned char userKEMask;
    unsigned long long newItemsCount;
    CDUnknownBlockType actionBlock;
}

- (id)init;

@end

