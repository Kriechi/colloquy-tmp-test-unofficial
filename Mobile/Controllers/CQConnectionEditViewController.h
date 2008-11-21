@class MVChatConnection;
@class CQConnectionAdvancedEditController;

@interface CQConnectionEditViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
	IBOutlet UITableView *editTableView;
	IBOutlet CQConnectionAdvancedEditController *advancedEditViewController;
	UITextField *_currentEditingTextField;
	MVChatConnection *_connection;
	BOOL _newConnection;
}
@property (nonatomic, assign) MVChatConnection *connection;
@property (nonatomic, getter=isNewConnection) BOOL newConnection;
@end