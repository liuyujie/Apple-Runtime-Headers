//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ExtensionBuilderPopUpMenuManager : NSObject
{
    NSArray *_menuItemTitles;
}

- (void).cxx_destruct;
- (id)menuItemTitleFromMenuItemIndex:(unsigned long long)arg1;
- (unsigned long long)menuItemIndexFromMenuItemTitle:(id)arg1;
- (id)createMenuWithNoneMenuItemTitle:(id)arg1 selectedItemIndex:(unsigned long long)arg2;
- (id)initWithMenuItemTitles:(id)arg1;

@end

