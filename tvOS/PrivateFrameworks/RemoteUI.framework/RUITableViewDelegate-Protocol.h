//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSIndexPath, RUIElement, RUITableView;

@protocol RUITableViewDelegate
- (void)tableViewOM:(RUITableView *)arg1 elementDidChange:(RUIElement *)arg2 action:(int)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)tableViewOMSubmitForm:(RUITableView *)arg1;
- (void)tableViewOMDidChange:(RUITableView *)arg1;
- (_Bool)tableViewOM:(RUITableView *)arg1 deleteRowAtIndexPath:(NSIndexPath *)arg2;
@end
