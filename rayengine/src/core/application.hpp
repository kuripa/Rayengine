#pragma once

int main(int argc, char** argv);

namespace rayengine
{
    class application
    {
        public:
        
        application();
        virtual ~application();
        
        void close();
       
        private:
        void run();
        
        private:
        bool m_running = true;
        
        private:
        friend int ::main(int argc, char** argv);
    };
    
    application* createApplication();
}