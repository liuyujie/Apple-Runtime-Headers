//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WKFormPeripheral.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WKFormSelectControl : NSObject <WKFormPeripheral>
{
    struct RetainPtr<NSObject<WKFormControl>> _control;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)endEditing;
- (void)beginEditing;
- (id)assistantView;
- (id)initWithView:(id)arg1;
@property(readonly, nonatomic) NSString *selectFormPopoverTitle;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(_Bool)arg3;

@end

