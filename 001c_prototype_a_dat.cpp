#include <iostream>
#include <string>
#include <map>
#include <vector>

// Data structure to hold pipeline configuration
struct PipelineConfig {
    std::string pipelineName;
    std::vector<std::string> dataSource;
    std::vector<std::string> dataProcessor;
    std::string notificationChannel;
};

// Data structure to hold data pipeline notification
struct DataPipelineNotification {
    std::string pipelineName;
    std::string notificationMessage;
};

// Function to generate notification based on pipeline configuration
DataPipelineNotification generateNotification(PipelineConfig config) {
    DataPipelineNotification notification;
    notification.pipelineName = config.pipelineName;
    notification.notificationMessage = "Data pipeline '" + config.pipelineName + "' has been triggered.";
    return notification;
}

int main() {
    // Sample pipeline configuration
    PipelineConfig config;
    config.pipelineName = "Daily Sales Report";
    config.dataSource.push_back("Sales Database");
    config.dataProcessor.push_back("Data Aggregator");
    config.dataProcessor.push_back("Data Analyzer");
    config.notificationChannel = "Email";

    // Generate notification based on pipeline configuration
    DataPipelineNotification notification = generateNotification(config);

    // Print notification
    std::cout << "Notification: " << notification.notificationMessage << std::endl;

    return 0;
}